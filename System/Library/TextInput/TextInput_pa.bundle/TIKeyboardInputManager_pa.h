/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 6:40:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/TextInput/TextInput_pa.bundle/TextInput_pa
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libTextInputCore.dylib/TIKeyboardInputManagerZephyr.h>

@interface TIKeyboardInputManager_pa : TIKeyboardInputManagerZephyr
+(id)decompositionMap;
+(id)compositionMap;
-(id)replacementForDoubleSpace;
-(char)doesComposeText;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(char)deletesComposedTextByComposedCharacterSequence;
-(id)sentenceDelimitingCharacters;
@end
