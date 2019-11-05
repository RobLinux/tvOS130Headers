/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/MTModalDismissing.h>

@class UIBarButtonItem, UIAlertController, NSString;

@interface MTAddPodcastOrStationController : NSObject <MTModalDismissing> {

	UIBarButtonItem* _plusButtonItem;
	UIAlertController* _alertController;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)presentingViewController;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)presentAddPodcastUIWithUrl:(id)arg1 ;
-(void)plusButtonPressed:(id)arg1 ;
-(void)presentAddPodcastUI;
-(BOOL)userHasSomePodcasts;
-(void)presentAddStationUI;
-(void)performSubscribe:(id)arg1 ;
-(void)presentStationWithTitle:(id)arg1 ;
-(id)createAndSaveStationWithTitle:(id)arg1 ;
-(void)dismissAllModalsAnimated:(BOOL)arg1 ;
-(id)plusButtonItem;
@end

