#ifndef CUBE_GUI_H
#define CUBE_GUI_H

#include "../IDA/types.h"
#include "../plasma/Node.h"
#include "ChatWidget.h"
#include "InventoryWidget.h"
#include "MultiplayerWidget.h"
#include "MapOverlayWidget.h"
#include "FormulaDetailsWidget.h"
#include "CharacterWidget.h"
#include "SystemWidget.h"
#include "EnchantWidget.h"
#include "VoxelWidget.h"
#include "AdaptionWidget.h"
#include "QuestionWidget.h"
#include "HelpWidget.h"
#include "PreviewWidget.h"
#include "SpriteWidget.h"
#include "ControlsWidget.h"
#include "SpeechWidget.h"

namespace cube {
    class Game;
    class GUI {
        public:
			plasma::Node* startmenu_node;
			plasma::Node* startmenu_buttons_node;
			void* start_menu_widget;
			plasma::Node* character_selection_node;
			_BYTE gap20[24];
			plasma::Node* button2_node;
			plasma::Node* smallbutton_node;
			plasma::Node* button_node;
			_BYTE gap50[8];
			plasma::Node* character_creation_node;
			void* character_style_widget;
			plasma::Node* blackwidget_node;
			plasma::Node* button_node_1;
			plasma::Node* charactername_node;
			plasma::Node* plasma_node_10;
			_BYTE gap88[56];
			plasma::Node* button_node_2;
			plasma::Node* button2_node_1;
			plasma::Node* smallbutton_node_1;
			plasma::Node* button_node_3;
			_BYTE gapE0[8];
			plasma::Node* plasma_node_15;
			plasma::Node* button_node_4;
			plasma::Node* worldseed_node;
			plasma::Node* worldname_node;
			plasma::Node* interface_elements_node;
			_BYTE gap110[48];
			plasma::Node* playername_node;
			plasma::Node* plasma_node_21;
			plasma::Node* hpbar_node;
			plasma::Node* bar_node;
			plasma::Node* mpbar_node;
			plasma::Node* bar_node_1;
			plasma::Node* experiencebar_node;
			plasma::Node* xpbar_node;
			plasma::Node* chargebar_node;
			plasma::Node* castbar_node;
			plasma::Node* bar_node_2;
			plasma::Node* staminabar_node;
			plasma::Node* bar_node_3;
			plasma::Node* plasma_node_33;
			plasma::Node* info_node_0;
			plasma::Node* info_node_1;
			plasma::Node* info_node_2;
			plasma::Node* location_node;
			plasma::Node* levelinfo_node;
			plasma::Node* crosshair_node;
			plasma::Node* zoomcrosshair_node;
			plasma::Node* lockedtarget_node;
			plasma::Node* highlightedtarget_node;
			plasma::Node* selector_node;
			plasma::Node* gold_node;
			plasma::Node* plasma_node_45;
			plasma::Node* combopoints_node;
			cube::InventoryWidget* equipment_inventory_widget;
			cube::CharacterWidget* character_widget;
			cube::InventoryWidget* crafting_inventory_widget;
			cube::FormulaDetailsWidget* formula_details_widget;
			cube::InventoryWidget* vendor_inventory_widget;
			cube::SystemWidget* system_widget;
			cube::EnchantWidget* enchant_widget;
			cube::VoxelWidget* voxel_widget;
			cube::AdaptionWidget* adaption_widget;
			cube::QuestionWidget* question_widget;
			cube::MapOverlayWidget* map_overlay_widget;
			cube::MultiplayerWidget* multiplayer_widget;
			cube::HelpWidget* help_widget;
			cube::ChatWidget* chat_widget;
			plasma::Node* recentlands_node;
			plasma::Node* leftbutton_node;
			plasma::Node* rightbutton_node;
			plasma::Node* missiontag_white_node;
			cube::PreviewWidget* preview_widget;
			_BYTE gap2B0[24];
			cube::SpriteWidget* quick_item_sprite_widget;
			cube::SpriteWidget* sprite_widget_1;
			cube::SpriteWidget* sprite_widget_2;
			cube::SpriteWidget* sprite_widget_3;
			_BYTE gap2E8[24];
			cube::SpeechWidget* speech_widget;
			char esc_menu_displayed;
			plasma::Node* blackwidget_node_0;
			plasma::Node* speech_node;
			plasma::Node* tab_node;
			plasma::Node* plasma_node_54;
			plasma::Node* plasma_node_55;
			plasma::Node* wait_node;
			plasma::Node* button_node_5;
			plasma::Node* enemy_node;
			plasma::Node* monster_node;
			plasma::Node* crystal_node;
			plasma::Node* brazier_node;
			plasma::Node* manapump_node;
			plasma::Node* npc_node;
			plasma::Node* static_node;
			plasma::Node* object_node;
			plasma::Node* star_node;
			plasma::Node* cross_node;
			plasma::Node* flight_point_node;
			plasma::Node* unknown_flight_point_node;
			plasma::Node* home_node;
			plasma::Node* mapposition_node;
			plasma::Node* direction_node;
			plasma::Node* armor_shop_node;
			plasma::Node* weapon_shop_node;
			plasma::Node* item_shop_node;
			plasma::Node* identifier_node;
			plasma::Node* smithy_node;
			plasma::Node* carpenters_shop_node;
			plasma::Node* tailors_shop_node;
			plasma::Node* inn_node;
			plasma::Node* shrine_node;
			plasma::Node* spirit_node;
			plasma::Node* bell_node;
			plasma::Node* harp_node;
			plasma::Node* whistle_node;
			plasma::Node* solved_node;
			plasma::Node* gnome_node;
			plasma::Node* hangglider_node;
			plasma::Node* boat_node;
			plasma::Node* climbingspikes_node;
			plasma::Node* reins_node;
			plasma::Node* destination_node;
			plasma::Node* crafting1_node;
			plasma::Node* crafting2_node;
			plasma::Node* crafting3_node;
			plasma::Node* crafting4_node;
			plasma::Node* flight_master_node;
			plasma::Node* guild_hall_node;
			plasma::Node* flower_node;
			plasma::Node* key_node;
			plasma::Node* treasure_node;
			plasma::Node* witch_node;
			plasma::Node* demonportal_node;
			char pad_04B8[32];
			plasma::Node* weaponrarity0_node;
			plasma::Node* weaponrarity1_node;
			plasma::Node* weaponrarity2_node;
			plasma::Node* weaponrarity3_node;
			plasma::Node* weaponrarity4_node;
			plasma::Node* weaponrarity5_node;
			plasma::Node* armorrarity0_node;
			plasma::Node* armorrarity1_node;
			plasma::Node* armorrarity2_node;
			plasma::Node* armorrarity3_node;
			plasma::Node* armorrarity4_node;
			plasma::Node* armorrarity5_node;
			void* options_widget;
			cube::ControlsWidget* controls_widget;
			float mouse_y;
			float scale;
			_BYTE gap550[8];
			plasma::Node* textFX_node;
			plasma::Node* lifebars_node;
			plasma::Node* enemylifebar_small_node;
			plasma::Node* friendlifebar_small_node;
			plasma::Node* staticlifebar_small_node;
			plasma::Node* neutrallifebar_small_node;
			plasma::Node* enemylifebar_node;
			plasma::Node* friendlifebar_node;
			plasma::Node* staticlifebar_node;
			plasma::Node* neutrallifebar_node;
			_BYTE gap5A8[24];
			cube::Game* game;
			char pad_05C8[8];


			void UpdateResolution(signed int width, signed int height);
        };
}
static_assert(sizeof(cube::GUI) == 0x5D0, "cube::GUI is not the correct size.");
#endif // CUBE_GUI_H
