/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:36:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/assistivetouchd-Structs.h>
#import <assistivetouchd/SCATHardwareInputSource.h>

@interface SCATKeyboardInputSource : SCATHardwareInputSource
-(char)handledEvent:(id)arg1 ;
-(long)_actionIdentifierForKeyCode:(long)arg1 withType:(NSString*)arg2 ;
-(id)_persistentSwitchIdentifierForKeyCode:(long)arg1 ;
-(id)_switchDisplayNameForKeyCode:(long)arg1 ;
-(char)isKeyboardInputSource;
-(int)_switchKeyForSwitch:(id)arg1 ;
-(NSString*)_switchSource;
@end
