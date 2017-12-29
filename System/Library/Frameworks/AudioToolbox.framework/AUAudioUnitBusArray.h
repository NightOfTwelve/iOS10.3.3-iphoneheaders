/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:29:24 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolbox/AudioToolbox-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, AUAudioUnit;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {

	NSMutableArray* _busses;
	char _countChangeable;
	AUAudioUnit* _ownerAudioUnit;
	int _busType;
	vector<BusPropertyObserver, std::__1::allocator<BusPropertyObserver> >* _observers;

}

@property (assign,nonatomic) vector<BusPropertyObserver observers;                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) unsigned count; 
@property (getter=isCountChangeable,nonatomic,readonly) char countChangeable;              //@synthesize countChangeable=_countChangeable - In the implementation block
@property (nonatomic,readonly) AUAudioUnit * ownerAudioUnit;                               //@synthesize ownerAudioUnit=_ownerAudioUnit - In the implementation block
@property (nonatomic,readonly) int busType;                                                //@synthesize busType=_busType - In the implementation block
-(id)initWithAudioUnit:(id)arg1 busType:(int)arg2 ;
-(void)replaceBusses:(id)arg1 ;
-(AUAudioUnit *)ownerAudioUnit;
-(int)busType;
-(char)setBusCount:(unsigned)arg1 error:(id*)arg2 ;
-(char)isCountChangeable;
-(void)addObserverToAllBusses:(id)arg1 forKeyPath:(id)arg2 options:(unsigned)arg3 context:(void*)arg4 ;
-(void)removeObserverFromAllBusses:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3 ;
-(void)indexBusses;
-(id)initWithAudioUnit:(id)arg1 busType:(int)arg2 busses:(id)arg3 ;
-(id)init;
-(unsigned)countByEnumeratingWithState:(SCD_Struct_AU45*)arg1 objects:(id*)arg2 count:(unsigned)arg3 ;
-(void)dealloc;
-(unsigned)count;
-(id)objectAtIndexedSubscript:(unsigned)arg1 ;
-(void)setObservers:(vector<BusPropertyObserver)arg1 ;
-(vector<BusPropertyObserver)observers;
@end
