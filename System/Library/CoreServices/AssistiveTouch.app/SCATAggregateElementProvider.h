/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:23:09 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <assistivetouchd/SCATElementProvider.h>

@class NSMutableOrderedSet, NSString;

@interface SCATAggregateElementProvider : NSObject <SCATElementProvider> {

	NSMutableOrderedSet* _providers;

}

@property (nonatomic,retain) NSMutableOrderedSet * providers;              //@synthesize providers=_providers - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char providesElements; 
-(id)firstElementWithOptions:(int*)arg1 ;
-(id)lastElementWithOptions:(int*)arg1 ;
-(id)elementBefore:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(id)elementAfter:(id)arg1 didWrap:(char*)arg2 options:(int*)arg3 ;
-(void)willBeginProvidingElements;
-(void)didFinishProvidingElements;
-(char)containsElement:(id)arg1 ;
-(char)providesElements;
-(void)addProvider:(id)arg1 ;
-(id)addProviderWithElements:(id)arg1 passingTest:(/*^block*/id)arg2 ;
-(unsigned)_indexOfProviderContainingElement:(id)arg1 ;
-(unsigned)_indexOfProviderBeforeProviderWithIndex:(unsigned)arg1 didWrap:(char*)arg2 ;
-(unsigned)_indexOfProviderAfterProviderWithIndex:(unsigned)arg1 didWrap:(char*)arg2 ;
-(void)removeAllProviders;
-(void)removeProvider:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(NSMutableOrderedSet *)providers;
-(void)setProviders:(NSMutableOrderedSet *)arg1 ;
@end

