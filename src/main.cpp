#include "bn_core.h"
#include "bn_keypad.h"
#include "bn_sprite_ptr.h" // Added to fully define bn::sprite_ptr
#include "bn_sprite_text_generator.h"
#include "bn_sprite_font.h"
#include "bn_vector.h"
#include "common_variable_8x16_sprite_font.h"

int main()
{
    // Initialize the Butano core
    bn::core::init();

    // Create a text generator with the common variable 8x16 font
    bn::sprite_text_generator text_generator(common::variable_8x16_sprite_font);
    text_generator.set_center_alignment();

    // Vector to hold text sprites
    bn::vector<bn::sprite_ptr, 32> text_sprites;

    // Generate text at position (80, 50) - center of GBA screen (240x160)
    text_generator.generate(0, 0, "¸µ¶·¹©ÊÇÈÉË¨¾»", text_sprites);
    text_generator.generate(0, 18, "¼½Æ®ÐÌÎÏÑªÕÒÓÔÖÝ×", text_sprites);
    text_generator.generate(0, 32, "ØÜÞãßáâä«èåæçé¬íêë", text_sprites);
    text_generator.generate(0, 48, "ìîóïñòô­øõö÷ùýúûüþ!", text_sprites);
    // Main loop
    while(true)
    {
        if(bn::keypad::start_pressed())
        {
            break;
        }
        bn::core::update();
    }

    return 0;
}