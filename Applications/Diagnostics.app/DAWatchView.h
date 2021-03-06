/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:53 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Diagnostics.app/Diagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BPSWatchView.h>
#import <Bridge/NTKLibrarySelectedFaceSnapshotProviderDelegate.h>

@class NRDevice, NTKLibrarySelectedFaceSnapshotProvider, NSString;

@interface DAWatchView : BPSWatchView <NTKLibrarySelectedFaceSnapshotProviderDelegate> {

	NRDevice* _nanoRegistryDevice;
	NTKLibrarySelectedFaceSnapshotProvider* _snapshotProvider;

}

@property (nonatomic,retain) NRDevice * nanoRegistryDevice;                                          //@synthesize nanoRegistryDevice=_nanoRegistryDevice - In the implementation block
@property (nonatomic,retain) NTKLibrarySelectedFaceSnapshotProvider * snapshotProvider;              //@synthesize snapshotProvider=_snapshotProvider - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NTKLibrarySelectedFaceSnapshotProvider *)snapshotProvider;
-(void)setSnapshotProvider:(NTKLibrarySelectedFaceSnapshotProvider *)arg1 ;
-(id)initWithStyle:(unsigned)arg1 nanoRegistryDevice:(id)arg2 ;
-(void)layoutSubviews;
-(NRDevice *)nanoRegistryDevice;
-(void)setNanoRegistryDevice:(NRDevice *)arg1 ;
-(void)snapshotImageUpdated:(id)arg1 ;
@end

