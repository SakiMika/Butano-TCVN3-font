/*
 * Copyright (c) 2020-2022 Gustavo Valiente gustavo.valiente@protonmail.com
 * zlib License, see LICENSE file.
 */

#ifndef COMMON_VARIABLE_8x16_SPRITE_FONT_H
#define COMMON_VARIABLE_8x16_SPRITE_FONT_H

#include "bn_sprite_font.h"
#include "bn_utf8_characters_map.h"
#include "bn_sprite_items_common_variable_8x16_font.h"

namespace common
{

constexpr bn::utf8_character variable_8x16_sprite_font_utf8_characters[] = {
    "¡", "¢", "£", "¤", "¥", "¦", "§", "¨", "©", "ª", "«", "¬", "­", "®", "¯", "°", "±", "²", "³", "´", "µ", "¶", "·", "¸", "¹", "º", "»", "¼", "½", "¾", "¿", "À", "Á", "Â", "Ã", "Ä", "Å", "Æ", "Ç", "È", "É", "Ê", "Ë", "Ì", "Í", "Î", "Ï", "Ð", "Ñ", "Ò", "Ó", "Ô", "Õ", "Ö", "×", "Ø", "Ù", "Ú", "Û", "Ü", "Ý", "Þ", "ß", "à", "á", "â", "ã", "ä", "å", "æ", "ç", "è", "é", "ê", "ë", "ì", "í", "î", "ï", "ð", "ñ", "ò", "ó", "ô", "õ", "ö", "÷", "ø", "ù", "ú", "û", "ü", "ý", "þ", "ÿ"
};

constexpr int8_t variable_8x16_sprite_font_character_widths[] = {
    7,  // 32
    5,  // 33 !
    8,  // 34 "
    9,  // 35 #
    9,  // 36 $
    8,  // 37 %
    9,  // 38 &
    5,  // 39 '
    6,  // 40 (
    6,  // 41 )
    8,  // 42 *
    8,  // 43 +
    5,  // 44 
    8,  // 45 -
    5,  // 46 .
    8,  // 47 /
    8,  // 48 0
    5,  // 49 1
    8,  // 50 2
    8,  // 51 3
    8,  // 52 4
    8,  // 53 5
    8,  // 54 6
    8,  // 55 7
    8,  // 56 8
    8,  // 57 9
    5,  // 58 :
    5,  // 59 ;
    7,  // 60 <
    8,  // 61 =
    7,  // 62 >
    8,  // 63 ?
    9,  // 64 @
    8,  // 65 A
    8,  // 66 B
    8,  // 67 C
    8,  // 68 D
    8,  // 69 E
    8,  // 70 F
    8,  // 71 G
    8,  // 72 H
    6,  // 73 I
    8,  // 74 J
    8,  // 75 K
    8,  // 76 L
    9,  // 77 M
    8,  // 78 N
    8,  // 79 O
    8,  // 80 P
    9,  // 81 Q
    8,  // 82 R
    8,  // 83 S
    8,  // 84 T
    8,  // 85 U
    8,  // 86 V
    9,  // 87 W
    8,  // 88 X
    8,  // 89 Y
    8,  // 90 Z
    6,  // 91 [
    8,  // 92
    6,  // 93 ]
    5,  // 94 ^
    8,  // 95 _
    5,  // 96 `
    8,  // 97 a
    8,  // 98 b
    8,  // 99 c
    8,  // 100 d
    8,  // 101 e
    7,  // 102 f
    8,  // 103 g
    8,  // 104 h
    4,  // 105 i
    5,  // 106 j
    7,  // 107 k
    4,  // 108 l
    9,  // 109 m
    8,  // 110 n
    8,  // 111 o
    8,  // 112 p
    8,  // 113 q
    7,  // 114 r
    8,  // 115 s
    7,  // 116 t
    8,  // 117 u
    8,  // 118 v
    9,  // 119 w
    8,  // 120 x
    8,  // 121 y
    8,  // 122 z
    7,  // 123 {
    4,  // 124 |
    7,  // 125 }
    9,  // 126 ~
    8,  // á
    8,  // à
    8,  // ả
    8,  // ã
    8,  // ạ
    8,  // â
    8,  // ấ
    8,  // ầ
    8,  // ẩ
    8,  // ẫ
    8,  // ậ
    8,  // ă
    8,  // ắ
    8,  // ằ
    8,  // ẳ
    8,  // ẵ
	8,  // ặ
	9, // đ
	8, // é
	8, // è
	8, // ẻ
	8, // ẽ
	8, //ẹ
	8, //ê
	8, //ế
	8, //ề
	8, //ể
	8, // ễ
	8,// ệ
	5, //í
	5,//ì
	4,//ỉ
	6,//ĩ
	4,//ị
	8, //ó
	8,//ò
	8,//ỏ
	8,//õ
	8,//ọ
	8,//ô
	8,//ố
	8,//ồ
	8,//ổ
	8,//ỗ
	8,//ộ
	9,//ơ
	9,//ớ
	9,//ờ
	9,//ở
	9,//ỡ
	9,//ợ
	8,//ú
	8,//ù
	8,//ủ
	8,//ũ
	8,//ụ
	9,//ư
	9,//ứ
	9,//ừ
	9,//ử
	9,//ữ
	9,//ự
	8,//ý
	8,//ỳ
	8,//ỷ
	8,//ỹ
	8,//ỵ
	8,//Á
	8,//À
	8,//Ả
	8,//Ã
	8,//Ạ
	8,//Â
	8,//Ấ
	8,//Ầ
	8,//Ẩ
	8,//Ẫ
	8,//Ậ
	8,//Ă
	8,//Ắ
	8,//Ằ
	8,//Ẳ
	8,//Ẵ
	8,//Ặ
	9,//Đ
	8,//É
	8,//È
	8,//Ẻ
	8,//Ẽ
	8,//Ẹ
	8,//Ê
	8,//Ế
	8,//Ề
	8,//Ể
	8,
};

constexpr bn::span<const bn::utf8_character> variable_8x16_sprite_font_utf8_characters_span(
        variable_8x16_sprite_font_utf8_characters);

constexpr auto variable_8x16_sprite_font_utf8_characters_map =
        bn::utf8_characters_map<variable_8x16_sprite_font_utf8_characters_span>();

constexpr bn::sprite_font variable_8x16_sprite_font(
        bn::sprite_items::common_variable_8x16_font, variable_8x16_sprite_font_utf8_characters_map.reference(),
        variable_8x16_sprite_font_character_widths);

}

#endif
