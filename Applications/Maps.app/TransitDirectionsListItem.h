/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:41 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class MNTransitInstruction, NSArray, UIImage, UIColor, NSTimeZone, SearchResult, GEOComposedRouteStep;

@interface TransitDirectionsListItem : NSObject {

	MNTransitInstruction* _transitInstruction;
	int _type;
	NSArray* _majorFormattedStrings;
	UIImage* _majorStringImage;
	NSArray* _minorFormattedStrings;
	UIImage* _minorStringImage;
	NSArray* _tertiaryFormattedStrings;
	UIColor* _fromLineColor;
	UIColor* _toLineColor;
	UIColor* _alternateFromLineColor;
	UIColor* _alternateToLineColor;
	NSArray* _composedRouteSteps;
	NSArray* _composedRouteStepsDisplayedOnMap;
	TransitDirectionsListItem* _parentItem;
	NSTimeZone* _timeZoneForFormattedString;
	NSArray* _postTertiaryItems;
	NSArray* _footerItems;
	SearchResult* _searchResult;

}

@property (nonatomic,readonly) id<MKArtworkImageSource> dimmedDefaultImageSource; 
@property (nonatomic,readonly) MNTransitInstruction * transitInstruction;                      //@synthesize transitInstruction=_transitInstruction - In the implementation block
@property (assign,nonatomic) int type;                                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * majorFormattedStrings;                                    //@synthesize majorFormattedStrings=_majorFormattedStrings - In the implementation block
@property (nonatomic,copy) UIImage * majorStringImage;                                         //@synthesize majorStringImage=_majorStringImage - In the implementation block
@property (nonatomic,copy) NSArray * minorFormattedStrings;                                    //@synthesize minorFormattedStrings=_minorFormattedStrings - In the implementation block
@property (nonatomic,copy) UIImage * minorStringImage;                                         //@synthesize minorStringImage=_minorStringImage - In the implementation block
@property (nonatomic,copy) NSArray * tertiaryFormattedStrings;                                 //@synthesize tertiaryFormattedStrings=_tertiaryFormattedStrings - In the implementation block
@property (nonatomic,retain) UIColor * fromLineColor;                                          //@synthesize fromLineColor=_fromLineColor - In the implementation block
@property (nonatomic,retain) UIColor * toLineColor;                                            //@synthesize toLineColor=_toLineColor - In the implementation block
@property (nonatomic,retain) UIColor * alternateFromLineColor;                                 //@synthesize alternateFromLineColor=_alternateFromLineColor - In the implementation block
@property (nonatomic,retain) UIColor * alternateToLineColor;                                   //@synthesize alternateToLineColor=_alternateToLineColor - In the implementation block
@property (nonatomic,copy) NSArray * composedRouteSteps;                                       //@synthesize composedRouteSteps=_composedRouteSteps - In the implementation block
@property (nonatomic,copy) NSArray * composedRouteStepsDisplayedOnMap;                         //@synthesize composedRouteStepsDisplayedOnMap=_composedRouteStepsDisplayedOnMap - In the implementation block
@property (assign,nonatomic,__weak) TransitDirectionsListItem * parentItem;                    //@synthesize parentItem=_parentItem - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZoneForFormattedString;                        //@synthesize timeZoneForFormattedString=_timeZoneForFormattedString - In the implementation block
@property (nonatomic,copy) NSArray * postTertiaryItems;                                        //@synthesize postTertiaryItems=_postTertiaryItems - In the implementation block
@property (nonatomic,copy) NSArray * footerItems;                                              //@synthesize footerItems=_footerItems - In the implementation block
@property (nonatomic,readonly) NSArray * subItems; 
@property (nonatomic,readonly) char selectable; 
@property (nonatomic,retain) SearchResult * searchResult;                                      //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,readonly) GEOComposedRouteStep * matchingRouteStep; 
-(NSArray *)subItems;
-(id)initWithInstructions:(id)arg1 ;
-(id)_dimmedDefaultImageSource;
-(id<MKArtworkImageSource>)dimmedDefaultImageSource;
-(id)imageSourceForNavState:(int)arg1 ;
-(GEOComposedRouteStep *)matchingRouteStep;
-(SCD_Struct_RA12)mergedMapRect:(SCD_Struct_RA12)arg1 ;
-(id)formattedStringsForType:(int)arg1 ;
-(NSArray *)composedRouteStepsDisplayedOnMap;
-(UIColor *)alternateFromLineColor;
-(UIColor *)alternateToLineColor;
-(MNTransitInstruction *)transitInstruction;
-(NSArray *)majorFormattedStrings;
-(void)setMajorFormattedStrings:(NSArray *)arg1 ;
-(UIImage *)majorStringImage;
-(void)setMajorStringImage:(UIImage *)arg1 ;
-(NSArray *)minorFormattedStrings;
-(void)setMinorFormattedStrings:(NSArray *)arg1 ;
-(UIImage *)minorStringImage;
-(void)setMinorStringImage:(UIImage *)arg1 ;
-(NSArray *)tertiaryFormattedStrings;
-(void)setTertiaryFormattedStrings:(NSArray *)arg1 ;
-(UIColor *)fromLineColor;
-(void)setFromLineColor:(UIColor *)arg1 ;
-(UIColor *)toLineColor;
-(void)setToLineColor:(UIColor *)arg1 ;
-(void)setAlternateFromLineColor:(UIColor *)arg1 ;
-(void)setAlternateToLineColor:(UIColor *)arg1 ;
-(NSArray *)composedRouteSteps;
-(void)setComposedRouteSteps:(NSArray *)arg1 ;
-(void)setComposedRouteStepsDisplayedOnMap:(NSArray *)arg1 ;
-(NSArray *)postTertiaryItems;
-(void)setPostTertiaryItems:(NSArray *)arg1 ;
-(void)setFooterItems:(NSArray *)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(char)selectable;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(NSTimeZone *)timeZoneForFormattedString;
-(NSArray *)footerItems;
-(void)setParentItem:(TransitDirectionsListItem *)arg1 ;
-(TransitDirectionsListItem *)parentItem;
@end

