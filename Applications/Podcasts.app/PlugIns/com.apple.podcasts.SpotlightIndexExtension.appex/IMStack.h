/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMStack : NSObject {

	NSMutableArray* _array;

}
-(void)pushObjects:(id)arg1 ;
-(id)peekDown:(unsigned)arg1 ;
-(id)peek;
-(id)init;
-(void)dealloc;
-(char)isEmpty;
-(id)pop;
-(void)removeAll;
-(void)push:(id)arg1 ;
-(unsigned)depth;
@end

