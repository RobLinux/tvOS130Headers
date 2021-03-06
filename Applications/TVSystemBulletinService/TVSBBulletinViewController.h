/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:58:52 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSystemBulletinService.app/TVSystemBulletinService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <TVSystemBulletinService/PBSBulletinPresenter.h>

@class PBSBulletin, TVSUIBulletinView, TVImageProxy, NSString;

@interface TVSBBulletinViewController : UIViewController <PBSBulletinPresenter> {

	PBSBulletin* _bulletin;
	TVSUIBulletinView* _bulletinView;
	TVImageProxy* _imageProxy;

}

@property (nonatomic,retain) PBSBulletin * bulletin;                        //@synthesize bulletin=_bulletin - In the implementation block
@property (nonatomic,retain) TVSUIBulletinView * bulletinView;              //@synthesize bulletinView=_bulletinView - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                     //@synthesize imageProxy=_imageProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
-(void)setBulletin:(PBSBulletin *)arg1 ;
-(PBSBulletin *)bulletin;
-(TVImageProxy *)imageProxy;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setBulletinView:(TVSUIBulletinView *)arg1 ;
-(TVSUIBulletinView *)bulletinView;
-(void)bulletinServiceBeginPresentationWithBulletin:(id)arg1 ;
-(void)bulletinServiceUpdateWithBulletin:(id)arg1 ;
-(void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)_bulletinViewForBulletin:(id)arg1 ;
-(void)_showBulletinView:(BOOL)arg1 ;
-(void)_configureBulletinView:(id)arg1 forBulletin:(id)arg2 ;
-(void)_hideBulletinViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_convertToAttributedStringIfNeeded:(id)arg1 imagePointSize:(double)arg2 ;
-(id)_bulletinImageForItem:(id)arg1 ;
@end

