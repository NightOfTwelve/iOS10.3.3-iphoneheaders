/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:22 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Podcasts.app/PlugIns/com.apple.podcasts.SpotlightIndexExtension.appex/com.apple.podcasts.SpotlightIndexExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface IMPodcastFeed : NSObject {

	NSString* _feedDescription;
	NSString* _author;
	NSString* _category;
	NSString* _imageURL;
	NSMutableArray* _items;
	NSString* _provider;
	NSString* _updatedFeedURL;
	NSString* _title;
	char _explicit;
	char _preferredCategoryFound;
	char _isExplicit;
	NSString* _globalImageURL;

}

@property (assign,nonatomic) char preferredCategoryFound;              //@synthesize preferredCategoryFound=_preferredCategoryFound - In the implementation block
@property (nonatomic,retain) NSString * feedDescription;               //@synthesize feedDescription=_feedDescription - In the implementation block
@property (nonatomic,retain) NSString * author;                        //@synthesize author=_author - In the implementation block
@property (nonatomic,retain) NSString * category;                      //@synthesize category=_category - In the implementation block
@property (nonatomic,retain) NSString * imageURL;                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSString * globalImageURL;                //@synthesize globalImageURL=_globalImageURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * items;                   //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,retain) NSString * updatedFeedURL;                //@synthesize updatedFeedURL=_updatedFeedURL - In the implementation block
@property (nonatomic,retain) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) char isExplicit;                          //@synthesize isExplicit=_isExplicit - In the implementation block
-(NSString *)updatedFeedURL;
-(char)preferredCategoryFound;
-(void)setPreferredCategoryFound:(char)arg1 ;
-(void)setFeedDescription:(NSString *)arg1 ;
-(void)setGlobalImageURL:(NSString *)arg1 ;
-(void)setUpdatedFeedURL:(NSString *)arg1 ;
-(NSString *)feedDescription;
-(NSString *)globalImageURL;
-(id)init;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(NSString *)provider;
-(void)setProvider:(NSString *)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(void)setIsExplicit:(char)arg1 ;
-(char)isExplicit;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
@end

