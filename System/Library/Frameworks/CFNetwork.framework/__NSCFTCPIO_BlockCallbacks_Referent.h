/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:20:40 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CFNetwork/CFNetwork-Structs.h>
@interface __NSCFTCPIO_BlockCallbacks_Referent : NSObject {

	TCPIO_BlockCallbacks_Listener* _readListener;
	TCPIO_BlockCallbacks_Listener* _writeListener;

}
-(void)setReadListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(void)setWriteListener:(TCPIO_BlockCallbacks_Listener*)arg1 ;
-(char)withListeners:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

