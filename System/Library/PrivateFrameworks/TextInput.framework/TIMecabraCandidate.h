/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:00 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <TextInput/TIKeyboardCandidate.h>

@class NSString, NSNumber;

@interface TIMecabraCandidate : TIKeyboardCandidate {

	char _emojiCandidate;
	char _extensionCandidate;
	char _isForShortcutConversion;
	char _isAutocorrection;
	char _OTAWordListCandidate;
	NSString* _candidate;
	NSString* _input;
	NSNumber* _mecabraCandidatePointerValue;
	unsigned _deleteCount;
	int _cursorMovement;

}

@property (nonatomic,retain) NSNumber * mecabraCandidatePointerValue;              //@synthesize mecabraCandidatePointerValue=_mecabraCandidatePointerValue - In the implementation block
+(int)type;
+(char)supportsSecureCoding;
-(id)initWithCandidateResultSetCoder:(id)arg1 ;
-(void)encodeWithCandidateResultSetCoder:(id)arg1 ;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 isAutocorrection:(char)arg7 isFromOTAWordList:(char)arg8 deleteCount:(unsigned)arg9 ;
-(void)setMecabraCandidatePointerValue:(NSNumber *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)input;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(unsigned)deleteCount;
-(id)candidate;
-(int)cursorMovement;
-(char)isForShortcutConversion;
-(char)isExtensionCandidate;
-(char)isEmojiCandidate;
-(char)isOTAWordListCandidate;
-(char)isFullwidthCandidate;
-(char)isAutocorrection;
-(id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3 ;
-(NSNumber *)mecabraCandidatePointerValue;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 isAutocorrection:(char)arg7 isFromOTAWordList:(char)arg8 ;
-(id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 isExtension:(char)arg4 isEmoji:(char)arg5 isShortcut:(char)arg6 isAutocorrection:(char)arg7 isFromOTAWordList:(char)arg8 deleteCount:(unsigned)arg9 cursorMovement:(int)arg10 ;
@end

