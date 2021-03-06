/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:21:42 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWNodeRenderDelegate;
#import <Celestial/Celestial-Structs.h>
@class NSMutableArray, NSString, BWGraph, BWNodeInput, BWNodeOutput, NSArray;

@interface BWNode : NSObject {

	NSMutableArray* _inputs;
	NSMutableArray* _outputs;
	NSString* _name;
	char _supportsConcurrentLiveInputCallbacks;
	char _supportsLiveReconfiguration;
	char _singleInput;
	char _singleOutput;
	BWGraph* _graph;
	id<BWNodeRenderDelegate> _renderDelegate;
	long long _configurationID;
	BWNodeInput* _input;
	BWNodeOutput* _output;

}

@property (assign,nonatomic) char supportsConcurrentLiveInputCallbacks;              //@synthesize supportsConcurrentLiveInputCallbacks=_supportsConcurrentLiveInputCallbacks - In the implementation block
@property (assign,nonatomic) char supportsLiveReconfiguration;                       //@synthesize supportsLiveReconfiguration=_supportsLiveReconfiguration - In the implementation block
@property (nonatomic,copy) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (readonly) NSString * nodeType; 
@property (readonly) NSString * nodeSubType; 
@property (readonly) NSArray * inputs; 
@property (readonly) NSArray * outputs; 
@property (readonly) BWNodeInput * input; 
@property (readonly) BWNodeOutput * output; 
@property (assign,nonatomic) id<BWNodeRenderDelegate> renderDelegate;                //@synthesize renderDelegate=_renderDelegate - In the implementation block
@property (nonatomic,readonly) char hasNonLiveConfigurationChanges; 
@property (assign,nonatomic) BWGraph * graph;                                        //@synthesize graph=_graph - In the implementation block
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BWNodeInput *)input;
-(NSString *)nodeType;
-(void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3 ;
-(void)didReachEndOfDataForInput:(id)arg1 ;
-(NSString *)nodeSubType;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)setSupportsLiveReconfiguration:(char)arg1 ;
-(void)didSelectFormat:(id)arg1 forInput:(id)arg2 ;
-(void)_handleMessage:(id)arg1 fromInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(void)setSupportsConcurrentLiveInputCallbacks:(char)arg1 ;
-(void)prepareForCurrentConfigurationToBecomeLive;
-(void)handleDroppedSample:(id)arg1 forInput:(id)arg2 ;
-(char)supportsLiveReconfiguration;
-(void)makeCurrentConfigurationLive;
-(char)hasNonLiveConfigurationChanges;
-(char)supportsConcurrentLiveInputCallbacks;
-(char)allInputsHaveReachedState:(int)arg1 ;
-(void)handleIrisReferenceMovieRequest:(id)arg1 forInput:(id)arg2 ;
-(void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:(int)arg1 forInput:(id)arg2 ;
-(BWGraph *)graph;
-(void)setGraph:(BWGraph *)arg1 ;
-(void)setConfigurationID:(long long)arg1 ;
-(long long)configurationID;
-(void)setRenderDelegate:(id<BWNodeRenderDelegate>)arg1 ;
-(id<BWNodeRenderDelegate>)renderDelegate;
-(BWNodeOutput *)output;
-(void)addOutput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(NSArray *)outputs;
-(NSArray *)inputs;
@end

