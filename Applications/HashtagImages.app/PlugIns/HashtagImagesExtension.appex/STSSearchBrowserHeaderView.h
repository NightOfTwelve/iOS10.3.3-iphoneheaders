/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:25 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/HashtagImages.app/PlugIns/HashtagImagesExtension.appex/HashtagImagesExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HashtagImagesExtension/HashtagImagesExtension-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UISearchBar;

@interface STSSearchBrowserHeaderView : UIView {

	NSArray* _constraints;
	UISearchBar* _searchBar;

}

@property (nonatomic,readonly) UISearchBar * searchBar;              //@synthesize searchBar=_searchBar - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(UISearchBar *)searchBar;
@end
