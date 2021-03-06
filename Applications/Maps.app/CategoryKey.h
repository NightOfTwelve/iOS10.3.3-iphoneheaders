/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:38 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOSearchCategory, NSString;

@interface CategoryKey : NSObject <NSCopying> {

	char _transitMode;
	char _isCarPlay;
	GEOSearchCategory* _category;
	NSString* _prefix;
	float _scale;
	CGSize _size;

}

@property (nonatomic,retain) GEOSearchCategory * category;              //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSString * prefix;                           //@synthesize prefix=_prefix - In the implementation block
@property (assign,nonatomic) char transitMode;                          //@synthesize transitMode=_transitMode - In the implementation block
@property (assign,nonatomic) float scale;                               //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) CGSize size;                               //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) char isCarPlay;                            //@synthesize isCarPlay=_isCarPlay - In the implementation block
-(char)transitMode;
-(void)setTransitMode:(char)arg1 ;
-(char)isCarPlay;
-(void)setIsCarPlay:(char)arg1 ;
-(CGSize)size;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(void)setCategory:(GEOSearchCategory *)arg1 ;
-(GEOSearchCategory *)category;
-(void)setScale:(float)arg1 ;
-(float)scale;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
@end

