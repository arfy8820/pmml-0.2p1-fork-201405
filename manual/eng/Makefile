TEXI2HTML = texi2any
TEX = ptex
EMACS = mule

pmml: pmml.texi
	$(EMACS) -batch pmml.texi -f texinfo-format-buffer -f save-buffer -kill
pmml.dvi: pmml.texi
	$(TEX) pmml.texi
	$(TEX) pmml.texi

pmml_toc.html: pmml.texi
	$(TEXI2HTML) --html --split=chapter pmml.texi

all: pmml pmml.dvi pmml_toc.html

