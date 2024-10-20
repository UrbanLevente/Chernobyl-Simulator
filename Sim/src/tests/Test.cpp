#include <pch.h>
#include "Test.h"
#include <imgui/imgui.h>

namespace test
{

	TestMenu::TestMenu(Test*& currentTestPointer)
		: m_CurrentTest(currentTestPointer) {
	}

	
	TestMenu::~TestMenu() {
	}

	void TestMenu::OnUpdate(float deltaTime) {
		for (auto& test : m_Tests) {
			if (ImGui::Button(test.first.c_str())) {
				m_CurrentTest = test.second();
			}
		}
	}
}
