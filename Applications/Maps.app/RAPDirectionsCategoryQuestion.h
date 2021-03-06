/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:24:36 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/RAPMenuQuestion.h>

@protocol RAPUserDirectionRequest, RAPMenuItem;
@class RAPQuestion;

@interface RAPDirectionsCategoryQuestion : RAPMenuQuestion {

	id<RAPUserDirectionRequest> _selectedValue;
	RAPQuestion*<RAPMenuItem> _betterRouteAvailableMenuItem;

}

@property (nonatomic,readonly) id<RAPUserDirectionRequest> selectedValue;                           //@synthesize selectedValue=_selectedValue - In the implementation block
@property (nonatomic,readonly) RAPQuestion*<RAPMenuItem> betterRouteAvailableMenuItem;              //@synthesize betterRouteAvailableMenuItem=_betterRouteAvailableMenuItem - In the implementation block
@property (nonatomic,readonly) char shouldShowBetterRouteAvailable; 
+(id)localizedHeaderText;
-(int)analyticTarget;
-(int)questionCategory;
-(id)mainMenuQuestionCategories;
-(char)canDisplayMenuItemForQuestionCategory:(int)arg1 ;
-(id)followUpQuestionForCategory:(int)arg1 ;
-(id)initWithReport:(id)arg1 parentQuestion:(id)arg2 directions:(id)arg3 ;
-(void)resetBadRouteSuggestionsQuestion;
-(char)shouldShowBetterRouteAvailable;
-(RAPQuestion*<RAPMenuItem>)betterRouteAvailableMenuItem;
-(id<RAPUserDirectionRequest>)selectedValue;
@end

