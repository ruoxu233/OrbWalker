#include "pch.hpp"

#include "ui.hpp"

#include "agent/skinchanger.hpp"
#include "class/obj_list.hpp"
#include "class/object.hpp"
#include "config/config.hpp"

namespace ui {
void LoadTheme() {
  ImVec4 *colors                         = GetStyle().Colors;
  colors[ImGuiCol_Text]                  = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
  colors[ImGuiCol_TextDisabled]          = ImVec4(0.50f, 0.50f, 0.50f, 1.00f);
  colors[ImGuiCol_WindowBg]              = ImVec4(0.10f, 0.10f, 0.10f, 1.00f);
  colors[ImGuiCol_ChildBg]               = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
  colors[ImGuiCol_PopupBg]               = ImVec4(0.19f, 0.19f, 0.19f, 0.92f);
  colors[ImGuiCol_Border]                = ImVec4(0.19f, 0.19f, 0.19f, 0.29f);
  colors[ImGuiCol_BorderShadow]          = ImVec4(0.00f, 0.00f, 0.00f, 0.24f);
  colors[ImGuiCol_FrameBg]               = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
  colors[ImGuiCol_FrameBgHovered]        = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
  colors[ImGuiCol_FrameBgActive]         = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
  colors[ImGuiCol_TitleBg]               = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_TitleBgActive]         = ImVec4(0.06f, 0.06f, 0.06f, 1.00f);
  colors[ImGuiCol_TitleBgCollapsed]      = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_MenuBarBg]             = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
  colors[ImGuiCol_ScrollbarBg]           = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
  colors[ImGuiCol_ScrollbarGrab]         = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
  colors[ImGuiCol_ScrollbarGrabHovered]  = ImVec4(0.40f, 0.40f, 0.40f, 0.54f);
  colors[ImGuiCol_ScrollbarGrabActive]   = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
  colors[ImGuiCol_CheckMark]             = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
  colors[ImGuiCol_SliderGrab]            = ImVec4(0.34f, 0.34f, 0.34f, 0.54f);
  colors[ImGuiCol_SliderGrabActive]      = ImVec4(0.56f, 0.56f, 0.56f, 0.54f);
  colors[ImGuiCol_Button]                = ImVec4(0.05f, 0.05f, 0.05f, 0.54f);
  colors[ImGuiCol_ButtonHovered]         = ImVec4(0.19f, 0.19f, 0.19f, 0.54f);
  colors[ImGuiCol_ButtonActive]          = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
  colors[ImGuiCol_Header]                = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
  colors[ImGuiCol_HeaderHovered]         = ImVec4(0.00f, 0.00f, 0.00f, 0.36f);
  colors[ImGuiCol_HeaderActive]          = ImVec4(0.20f, 0.22f, 0.23f, 0.33f);
  colors[ImGuiCol_Separator]             = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
  colors[ImGuiCol_SeparatorHovered]      = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
  colors[ImGuiCol_SeparatorActive]       = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
  colors[ImGuiCol_ResizeGrip]            = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
  colors[ImGuiCol_ResizeGripHovered]     = ImVec4(0.44f, 0.44f, 0.44f, 0.29f);
  colors[ImGuiCol_ResizeGripActive]      = ImVec4(0.40f, 0.44f, 0.47f, 1.00f);
  colors[ImGuiCol_Tab]                   = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
  colors[ImGuiCol_TabHovered]            = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
  colors[ImGuiCol_TabActive]             = ImVec4(0.20f, 0.20f, 0.20f, 0.36f);
  colors[ImGuiCol_TabUnfocused]          = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
  colors[ImGuiCol_TabUnfocusedActive]    = ImVec4(0.14f, 0.14f, 0.14f, 1.00f);
  colors[ImGuiCol_PlotLines]             = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_PlotLinesHovered]      = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_PlotHistogram]         = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_PlotHistogramHovered]  = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_TableHeaderBg]         = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
  colors[ImGuiCol_TableBorderStrong]     = ImVec4(0.00f, 0.00f, 0.00f, 0.52f);
  colors[ImGuiCol_TableBorderLight]      = ImVec4(0.28f, 0.28f, 0.28f, 0.29f);
  colors[ImGuiCol_TableRowBg]            = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
  colors[ImGuiCol_TableRowBgAlt]         = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
  colors[ImGuiCol_TextSelectedBg]        = ImVec4(0.20f, 0.22f, 0.23f, 1.00f);
  colors[ImGuiCol_DragDropTarget]        = ImVec4(0.33f, 0.67f, 0.86f, 1.00f);
  colors[ImGuiCol_NavHighlight]          = ImVec4(1.00f, 0.00f, 0.00f, 1.00f);
  colors[ImGuiCol_NavWindowingHighlight] = ImVec4(1.00f, 0.00f, 0.00f, 0.70f);
  colors[ImGuiCol_NavWindowingDimBg]     = ImVec4(1.00f, 0.00f, 0.00f, 0.20f);
  colors[ImGuiCol_ModalWindowDimBg]      = ImVec4(1.00f, 0.00f, 0.00f, 0.35f);

  ImGuiStyle &style       = GetStyle();
  style.WindowPadding     = ImVec2(8.00f, 8.00f);
  style.FramePadding      = ImVec2(5.00f, 2.00f);
  style.CellPadding       = ImVec2(6.00f, 6.00f);
  style.ItemSpacing       = ImVec2(6.00f, 6.00f);
  style.ItemInnerSpacing  = ImVec2(6.00f, 6.00f);
  style.TouchExtraPadding = ImVec2(0.00f, 0.00f);
  style.IndentSpacing     = 25;
  style.ScrollbarSize     = 15;
  style.GrabMinSize       = 10;
  style.WindowBorderSize  = 1;
  style.ChildBorderSize   = 1;
  style.PopupBorderSize   = 1;
  style.FrameBorderSize   = 1;
  style.TabBorderSize     = 1;
  style.WindowRounding    = 7;
  style.ChildRounding     = 4;
  style.FrameRounding     = 3;
  style.PopupRounding     = 4;
  style.ScrollbarRounding = 9;
  style.GrabRounding      = 3;
  style.LogSliderDeadzone = 4;
  style.TabRounding       = 4;
}

void Update() {
  static bool show_menu{true};
  if (IsKeyPressed(config::inst().menu_key)) { show_menu ^= true; }
  if (!show_menu) return;
  window("Settings", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoFocusOnAppearing)(
    [] {
      SetWindowSize({400, 0});
      tab_bar("TabBar", ImGuiTabBarFlags_FittingPolicyScroll | ImGuiTabBarFlags_NoTooltip)([] {
        tab_item("Script")([] {
          auto &config = config::inst();
          separator("Drawing Setting");
          if (Checkbox("Show Attack Range", &config.show_attack_range)) config.save();
          if (Checkbox("Show Click", &config.show_click)) config.save();
          separator("Selector Setting");
          if (BeginTable("##", 2)) {
            TableNextColumn();
            if (RadioButton("health lowest", config.selector == HealthLowest)) {
              config.selector = HealthLowest;
              config.save();
            }
            TableNextColumn();
            if (RadioButton("health highest", config.selector == HealthHighest)) {
              config.selector = HealthHighest;
              config.save();
            }
            TableNextColumn();
            if (RadioButton("health percent lowest", config.selector == HealthPercentLowest)) {
              config.selector = HealthPercentLowest;
              config.save();
            }
            TableNextColumn();
            if (RadioButton("distance closest", config.selector == DistanceClosest)) {
              config.selector = DistanceClosest;
              config.save();
            }
            EndTable();
          }
          separator("Key Setting");
          if (hot_key("Kite Key", config.kite_key)) config.save();
          if (hot_key("Clean Lane Key", config.clean_key)) config.save();
        });
        tab_item("Skin")([] {
          auto &config  = config::inst();
          auto &changer = skin::inst();
          separator("Skin Setting");
          auto &skins{changer.championSkins};
          if (BeginCombo("Current Skin", skins[config.current_skin].skinName.data())) {
            for (int n = 0; n < skins.size(); n++) {
              bool is_selected = (config.current_skin == n);
              if (Selectable(skins[n].skinName.data(), is_selected)) {
                config.current_skin = n;
                changer.ChangeSkin(skins[config.current_skin].modelName, skins[config.current_skin].skinId);
                config.save();
              }
              if (is_selected) SetItemDefaultFocus();
            }
            EndCombo();
          }
          if (const size_t i = changer.special_skin(); i < changer.specialSkins.size()) {
            const auto stack{Object::self()->dataStack()};
            auto &gear = stack->baseSkin.gear;
            auto &gears = changer.specialSkins[i].gears;
            if (BeginCombo("Current Gear", gears[gear].data())) {
              for (size_t n = 0; n < gears.size(); n++) {
                bool is_selected     = (gear == n);
                if (Selectable(gears[n].data(), is_selected)) {
                  gear = n;
                  stack->update(true);
                }
                if (is_selected) SetItemDefaultFocus();
              }
               EndCombo();
             }
          }
          separator("Key Setting");
          if (hot_key("Previous Skin Key", config.prev_skin_key)) config.save();
          if (hot_key("Next Skin Key", config.next_skin_key)) config.save();
        });
        tab_item("Extras")([] {
          auto &config = config::inst();
          if (hot_key("Menu Key", config.menu_key)) config.save();
          separator();
          if (Button("Force Close")) { std::terminate(); }
        });
      });
    }
  );

  // if (ImGui::BeginTabItem("Infos")) {
  //   for (const auto minion : std::span(minions->data, minions->size)) {
  //       if (minion->position()-self->position() < 300.f)
  //       ImGui::Text(minion->name().data());
  //   }
  //   ImGui::EndTabItem();
  // }
}
} // namespace ui