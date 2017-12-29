/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:27 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface IMHTMLStripper : NSObject {

	char _convertListItems;
	NSMutableArray* _enclosingListTags;
	unsigned _orderedListItemCount;

}

@property (nonatomic,retain) NSMutableArray * enclosingListTags;              //@synthesize enclosingListTags=_enclosingListTags - In the implementation block
@property (assign,nonatomic) unsigned orderedListItemCount;                   //@synthesize orderedListItemCount=_orderedListItemCount - In the implementation block
@property (assign,nonatomic) char convertListItems;                           //@synthesize convertListItems=_convertListItems - In the implementation block
+(id)extractPlainTextBody:(id)arg1 ;
-(id)replacementStringForTag:(id)arg1 isStartTag:(char)arg2 ;
-(char)convertListItems;
-(NSMutableArray *)enclosingListTags;
-(unsigned)orderedListItemCount;
-(void)setOrderedListItemCount:(unsigned)arg1 ;
-(void)setConvertListItems:(char)arg1 ;
-(id)htmlBody:(id)arg1 ;
-(id)stripHTMLString:(id)arg1 ;
-(void)setEnclosingListTags:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end
