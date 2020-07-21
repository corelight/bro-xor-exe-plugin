// Copyright 2017, Corelight, Inc. All rights reserved.

#include "Plugin.h"
#include "PE_XOR.h"

#include "plugin/Plugin.h"
#include "file_analysis/Component.h"

namespace plugin { namespace Corelight_PE_XOR { Plugin plugin; } }

using namespace plugin::Corelight_PE_XOR;

plugin::Configuration Plugin::Configure()
	{
	AddComponent(new ::file_analysis::Component("PE_XOR", ::file_analysis::PE_XOR::Instantiate));

	plugin::Configuration config;
	config.name = "Corelight::PE_XOR";
	config.description = "Plugin to detect and decrypt XOR-encrypted EXEs";
	config.version.major = 1;
	config.version.minor = 2;
	return config;
	}
