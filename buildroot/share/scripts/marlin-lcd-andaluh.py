#!/usr/bin/env python
# -*- coding: utf-8 -*-
# vim: ts=4
###
# 
# Copyright (c) 2020 Andalugeeks
# Authors:
# - J. Félix Ontañón <felixonta@gmail.com>

import re

import andaluh # $ pip install andaluh (andaluh-py>=0.2.0)

LANG_ES_FILE='../../../Marlin/src/lcd/language/language_es.h'
LANG_ES_AND_FILE='../../../Marlin/src/lcd/language/language_es_AND.h'

EXCEPTIONS = {
    u"Spanish": u"Andalûh (EPA)",
    u"USB": u"USB",
    u"al SD/USB": u"al SD/USB",
    u"Soft Endstops": u"Soft Endstops",
    u"Prob.": "Prob.",
    u"Origen X": u"Orihen X",
    u"Índice X": u"Índice X",
    u"Personaliz.": u"Perçonaliç.",
    u"IDEX": u"IDEX",
    u"Boquilla X": u"Boquiya X",
    u"Bed": u"Bed",
    u"Hotend": u"Hotend",
    u"Edit.": u"Edit.",
    u"longit.": u"longit.",
    u"cuad.": u"cuad.",
    u"host": u"host",
    u"CSV": u"CSV",
    u"Off Printer Backup": u"Off Printer Backup",
    u"UBL": u"UBL",
    u"LED": u"LED",
    u"Libre XY": u"Libre XY",
    u"Mover X": u"Mover X",
    u"Vel.": u"Bel.",
    u"Max": u"Max",
    u"Fact": u"Fact",
    u"Accel": u"Aççel",
    u"Acel. max.": u"Açel. max",
    u"Acel. retract.": u"Açel. retrâtt",
    u"Fil. Dia.": u"Fil. Dia.",
    u"LCD": u"LCD",
    u"Retraer  V": u"Retraer  V",
    u"DesRet mm": u"DesRet mm",
    u"Interc. DesRet mm": u"Interc. DesRet mm",
    u"DesRet V": u"DesRet V",
    u"S UnRet V": u"S UnRet V",
    u"Inter.": u"Inter.",
    u"Speed": u"Speed",
    u"fil.": u'fil.',
    u"Poner BLTouch a 5V": u"Ponêh BLTouch a 5V",
    u"BLTouch": u"BLTouch",
    u"Cmd: Modo 5V": u"Cmd: Modo 5V",
    u"Cmd: Modo Software": u"Cmd: Modo Software",
    u"TouchMI": u"TouchMI",
    u"Test": u"Test",
    u"Micropaso X": u"Micropaço X",
    u"Cancelado - Endstop": u"Cançelao - Endstop",
    u"MÁX": u"MÁX",
    u"Delta": u"Delta",
    u"Calibrar X": u"Calibrar X",
    u"X Driver": u"X Driver",
    u"Y Driver": u"Y Driver",
    u"Z Driver": u"Z Driver",
    u"E Driver": u"E Driver",    
    u"CONEX.": u"CONEX.",
    u"DAC": u"DAC",
    u"Fil.": u"Fil.",
    u".V": u".V",
    u"Games": u"Games",
    u"Brickout": u"Brickout",
    u"Invaders": u"Invaders",
    u"Sn4k3": u"Sn4k3",
    u"Maze": u"Maze",
    u"Límite Hibrido": u"Límite Íbrido",
    u"StealthChop Habilit.": u"StealthChop Abilit."
}

# Matches everything on quotes (translation strings)
translate_re = re.compile('\"(.*?)\"', flags=re.UNICODE)

def translate_es_and(es_file):

    def translate(match):
        s = match.group(1)
        exception = [x for x in EXCEPTIONS.keys() if x in s]

        if len(exception):
            chunks = s.split(exception[0])
            andaluh_string = '"' + EXCEPTIONS[exception[0]].join([andaluh.epa(chunk) for chunk in chunks]) + '"'
        else:
            andaluh_string = andaluh.epa(match.group(0))

        return andaluh_string

    return translate_re.sub(translate, es_file.read())

if __name__ == '__main__':
    import sys
    import io
    from optparse import OptionParser

    parser = OptionParser()
    parser.add_option("-i", "--input", dest="file_in", help="File with strings to translate", default=LANG_ES_FILE)
    parser.add_option("-o", "--output", dest="file_out", help="Output file", default=LANG_ES_AND_FILE)
    (options, args) = parser.parse_args()

    if not options.file_in:
        parser.error('filename not given, get help with --help')

    else:
        infile_path = options.file_in
        outfile_path = options.file_out

        file_in = io.open(infile_path, mode="r", encoding="utf-8")
        and_text = translate_es_and(file_in)

        file_out = io.open(outfile_path, mode="w", encoding="utf-8")
        file_out.write(and_text)

        print (and_text)

        file_in.close()
        file_out.close()

        sys.exit(0)
