// Copyright 2011 Nuffer Brothers Software LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#if !defined(rr_engine_NAMED_HPP)
#define rr_engine_NAMED_HPP

#include "EngineConfig.hpp"
#include "miniblocxx/String.hpp"

namespace engine
{
	class Named
	{
	public:
		Named() : m_name(Format("unnamed-%1", (const void*)(this))) { }
		Named(const std::string& name) : m_name(name) { }
		void setName(const std::string& name) { m_name = name; }
		std::string name() const { return m_name; }

	private:
		std::string m_name;
	};
}

#endif
