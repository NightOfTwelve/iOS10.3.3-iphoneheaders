/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:30:06 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <CoreBluetooth/CBManager.h>

@protocol CBCentralManagerDelegate;
@class NSMapTable;

@interface CBCentralManager : CBManager {

	struct {
		unsigned willRestoreState : 1;
		unsigned didDiscoverPeripheral : 1;
		unsigned didConnectPeripheral : 1;
		unsigned didFailToConnectPeripheral : 1;
		unsigned didDisconnectPeripheral : 1;
		unsigned didUpdatePeripheralConnectionState : 1;
		unsigned didLoseZone : 1;
		unsigned didUpdateConnectionParameters : 1;
	}  _delegateFlags;
	char _isScanning;
	id<CBCentralManagerDelegate> _delegate;
	NSMapTable* _peripherals;

}

@property (assign,nonatomic) char isScanning;                                           //@synthesize isScanning=_isScanning - In the implementation block
@property (nonatomic,retain,readonly) NSMapTable * peripherals;                         //@synthesize peripherals=_peripherals - In the implementation block
@property (assign,nonatomic,__weak) id<CBCentralManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)setDelegate:(id<CBCentralManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<CBCentralManagerDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)peripheralWithInfo:(id)arg1 ;
-(void)forEachPeripheral:(/*^block*/id)arg1 ;
-(void)orphanPeripherals;
-(id)dataArrayToUUIDArray:(id)arg1 ;
-(id)peripheralWithIdentifier:(id)arg1 ;
-(void)handleRestoringState:(id)arg1 ;
-(void)handlePeripheralDiscovered:(id)arg1 ;
-(void)handlePeripheralConnectionCompleted:(id)arg1 ;
-(void)handlePeripheralDisconnectionCompleted:(id)arg1 ;
-(void)handlePeripheralConnectionStateUpdated:(id)arg1 ;
-(void)handleZoneLost:(id)arg1 ;
-(void)handleConnectionParametersUpdated:(id)arg1 ;
-(void)handleMsg:(unsigned short)arg1 args:(id)arg2 ;
-(id)peerWithInfo:(id)arg1 ;
-(char)isMsgAllowedWhenOff:(unsigned short)arg1 ;
-(char)isMsgAllowedAlways:(unsigned short)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 ;
-(char)isScanning;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 ;
-(void)cancelPeripheralConnection:(id)arg1 force:(char)arg2 ;
-(void)setDesiredConnectionLatency:(int)arg1 forPeripheral:(id)arg2 ;
-(id)retrieveConnectedPeripheralsWithServices:(id)arg1 allowAll:(char)arg2 ;
-(NSMapTable *)peripherals;
-(void)setIsScanning:(char)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(id)retrievePeripheralsWithIdentifiers:(id)arg1 ;
-(void)connectPeripheral:(id)arg1 options:(id)arg2 ;
-(void)cancelPeripheralConnection:(id)arg1 ;
-(void)scanForPeripheralsWithServices:(id)arg1 options:(id)arg2 ;
-(void)stopScan;
@end
