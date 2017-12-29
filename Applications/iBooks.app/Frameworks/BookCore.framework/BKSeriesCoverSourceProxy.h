/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:39:51 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/iBooks.app/Frameworks/BookCore.framework/BookCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BookCore/BKSeriesCoverSource.h>

@class BKSeriesCoverSource, NSString;

@interface BKSeriesCoverSourceProxy : NSObject <BKSeriesCoverSource> {

	BKSeriesCoverSource* _source;
	id _identifier;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * bookId; 
-(id)coverImages;
-(NSString *)bookId;
-(id)initWithSource:(id)arg1 identifier:(id)arg2 ;
-(id)coverImagesFlags:(int)arg1 ;
-(id)addSeriesImageObserverWithHandler:(/*^block*/id)arg1 queue:(id)arg2 notifyImmediately:(char)arg3 ;
-(void)removeSeriesImageObserver:(id)arg1 ;
-(id)coverSources;
-(id)coverSourcesFlags:(int)arg1 ;
-(void)updateCoverSourcesFromInfos:(id)arg1 ;
-(char)coverImagesAllBlankOrAllNonBlank;
-(void)dealloc;
-(id)identifier;
-(void)prepareForReuse;
@end
