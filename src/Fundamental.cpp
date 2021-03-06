#include "Fundamental.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = TOSTRING(SLUG);
	p->version = TOSTRING(VERSION);

	p->addModel(modelVCO);
	p->addModel(modelVCO2);
	p->addModel(modelVCF);
	p->addModel(modelVCA);
	p->addModel(modelLFO);
	p->addModel(modelLFO2);
	p->addModel(modelDelay);
	p->addModel(modelADSR);
	p->addModel(modelVCMixer);
	p->addModel(model_8vert);
	p->addModel(modelUnity);
	p->addModel(modelMutes);
	p->addModel(modelScope);
	p->addModel(modelSEQ3);
	p->addModel(modelSequentialSwitch1);
	p->addModel(modelSequentialSwitch2);
}
