/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 29, 2017 at 6:38:19 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/FindMyFriends.app/FindMyFriends
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <FindMyFriends/FMF3EditFriendCellDelegate.h>

@class NSMutableArray, NSString;

@interface EditFriendsViewController : UITableViewController <FMF3EditFriendCellDelegate> {

	char _isAnimating;
	char _isDeleting;
	NSMutableArray* _favorites;
	NSMutableArray* _friends;
	id _favoritesNotification;

}

@property (nonatomic,retain) NSMutableArray * favorites;              //@synthesize favorites=_favorites - In the implementation block
@property (nonatomic,retain) NSMutableArray * friends;                //@synthesize friends=_friends - In the implementation block
@property (nonatomic,retain) id favoritesNotification;                //@synthesize favoritesNotification=_favoritesNotification - In the implementation block
@property (assign,nonatomic) char isAnimating;                        //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic) char isDeleting;                         //@synthesize isDeleting=_isDeleting - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isInAnimationState;
-(void)toggleFavorite:(id)arg1 ;
-(void)setFavoritesNotification:(id)arg1 ;
-(id)favoritesNotification;
-(id)lineBreakForTag:(int)arg1 ;
-(char)isDeleting;
-(void)setIsDeleting:(char)arg1 ;
-(void)deleteAtEnd;
-(void)startAnimationHandling;
-(void)reorderFavorites;
-(id)favoriteFriendsSorted;
-(void)allowAnimationAgain;
-(int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidLoad;
-(char)isAnimating;
-(void)setFriends:(NSMutableArray *)arg1 ;
-(void)setFavorites:(NSMutableArray *)arg1 ;
-(NSMutableArray *)favorites;
-(void)setIsAnimating:(char)arg1 ;
-(void)doneButtonPressed:(id)arg1 ;
-(NSMutableArray *)friends;
@end
