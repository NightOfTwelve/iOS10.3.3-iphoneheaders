/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:26 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _UIFeedbackPlayer, UICoordinateSpace;
@class _UIFeedbackParameters, NSMutableArray, _UIFeedbackPattern, NSDictionary, NSString, Protocol, NSIndexSet;

@interface _UIFeedback : NSObject <NSCopying, NSSecureCoding> {

	char _playing;
	_UIFeedbackParameters* _audioParameters;
	_UIFeedbackParameters* _hapticParameters;
	float _position;
	id<_UIFeedbackPlayer> _player;
	NSMutableArray* _playerDequeueBlocks;
	_UIFeedbackPattern* _parentPattern;
	NSDictionary* _debugDictionary;
	NSString* _name;
	unsigned _mandatoryFeedbackTypes;
	NSString* _category;
	unsigned _eventToken;
	id<UICoordinateSpace> _coordinateSpace;
	double _delay;

}

@property (readonly) NSMutableArray * visualizerSources; 
@property (readonly) NSMutableArray * systemSoundSources; 
@property (getter=isPlaying,nonatomic,readonly) char playing;                                                                                //@synthesize playing=_playing - In the implementation block
@property (setter=_setPlayer:,getter=_player,nonatomic,retain) id<_UIFeedbackPlayer> player;                                                 //@synthesize player=_player - In the implementation block
@property (setter=_setPlayerDequeueBlocks:,getter=_playerDequeueBlocks,nonatomic,retain) NSMutableArray * playerDequeueBlocks;               //@synthesize playerDequeueBlocks=_playerDequeueBlocks - In the implementation block
@property (assign,setter=_setParentPattern:,getter=_parentPattern,nonatomic,__weak) _UIFeedbackPattern * parentPattern;                      //@synthesize parentPattern=_parentPattern - In the implementation block
@property (assign,setter=_setDelay:,getter=_delay,nonatomic) double delay;                                                                   //@synthesize delay=_delay - In the implementation block
@property (getter=_effectiveDelay,nonatomic,readonly) double effectiveDelay; 
@property (getter=_debugDictionary,nonatomic,readonly) NSDictionary * debugDictionary;                                                       //@synthesize debugDictionary=_debugDictionary - In the implementation block
@property (setter=_setName:,getter=_name,nonatomic,copy) NSString * name;                                                                    //@synthesize name=_name - In the implementation block
@property (getter=_playableProtocol,nonatomic,readonly) Protocol * playableProtocol; 
@property (assign,setter=_setMandatoryFeedbackTypes:,getter=_mandatoryFeedbackTypes,nonatomic) unsigned mandatoryFeedbackTypes;              //@synthesize mandatoryFeedbackTypes=_mandatoryFeedbackTypes - In the implementation block
@property (setter=_setCategory:,getter=_category,nonatomic,retain) NSString * category;                                                      //@synthesize category=_category - In the implementation block
@property (getter=_effectiveEnabledFeedbackTypes,nonatomic,readonly) unsigned effectiveEnabledFeedbackTypes; 
@property (getter=_effectiveEventType,nonatomic,readonly) unsigned effectiveEventType; 
@property (getter=_effectiveSystemSoundID,nonatomic,readonly) unsigned long effectiveSystemSoundID; 
@property (getter=_allEventTypes,nonatomic,readonly) NSIndexSet * allEventTypes; 
@property (getter=_allSystemSoundIDs,nonatomic,readonly) NSIndexSet * allSystemSoundIDs; 
@property (assign,setter=_setEventToken:,getter=_eventToken,nonatomic) unsigned eventToken;                                                  //@synthesize eventToken=_eventToken - In the implementation block
@property (assign,setter=_setCoordinateSpace:,getter=_coordinateSpace,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;               //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) _UIFeedbackParameters * audioParameters;                                                                      //@synthesize audioParameters=_audioParameters - In the implementation block
@property (nonatomic,readonly) _UIFeedbackParameters * hapticParameters;                                                                     //@synthesize hapticParameters=_hapticParameters - In the implementation block
@property (assign,nonatomic) float position;                                                                                                 //@synthesize position=_position - In the implementation block
+(id)type;
+(char)supportsSecureCoding;
+(id)feedbackWithDictionaryRepresentation:(id)arg1 ;
+(Class)_parametersClass;
+(Class)classForType:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)_category;
-(double)_delay;
-(void)stop;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_name;
-(void)setPosition:(float)arg1 ;
-(float)position;
-(_UIFeedbackParameters *)audioParameters;
-(_UIFeedbackParameters *)hapticParameters;
-(void)_setCategory:(id)arg1 ;
-(id)_allEventTypes;
-(unsigned)_effectiveEnabledFeedbackTypes;
-(unsigned)_effectiveEventType;
-(void)_setEventToken:(unsigned)arg1 ;
-(id)_playableProtocol;
-(char)isPlaying;
-(unsigned)_eventToken;
-(NSDictionary *)dictionaryRepresentation;
-(void)_setMandatoryFeedbackTypes:(unsigned)arg1 ;
-(NSMutableArray *)visualizerSources;
-(unsigned long)_effectiveSystemSoundID;
-(id)_coordinateSpace;
-(id)_player;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned)_mandatoryFeedbackTypes;
-(double)_effectiveDelay;
-(void)_playAtTime:(double)arg1 ;
-(void)_setPlayer:(id)arg1 ;
-(id)_debugDictionary;
-(id)_allSystemSoundIDs;
-(void)play;
-(id)_playerDequeueBlocks;
-(void)_setPlayerDequeueBlocks:(id)arg1 ;
-(id)_parentPattern;
-(void)_setParentPattern:(id)arg1 ;
-(void)_setDelay:(double)arg1 ;
-(void)_setName:(id)arg1 ;
-(void)_setCoordinateSpace:(id)arg1 ;
-(NSMutableArray *)systemSoundSources;
@end

