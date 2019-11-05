/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInterfaceAction.h>
#import <UIKit/UIAlertActionMutablePropertyObservering.h>

@class UIAlertAction, _UIAlertControllerActionView, NSString;

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering> {

	UIAlertAction* _underlyingAlertAction;
	BOOL _valid;

}

@property (nonatomic,readonly) _UIAlertControllerActionView * alertControllerActionView; 
@property (nonatomic,readonly) UIAlertAction * underlyingAlertAction;                                 //@synthesize underlyingAlertAction=_underlyingAlertAction - In the implementation block
@property (nonatomic,readonly) BOOL valid;                                                            //@synthesize valid=_valid - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionWithAlertControllerActionView:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(long long)type;
-(BOOL)valid;
-(long long)_typeForDeterminingViewRepresentation;
-(id)classificationTitle;
-(id)leadingImage;
-(void)_action:(id)arg1 changedToTitle:(id)arg2 ;
-(void)_action:(id)arg1 changedToTitleTextAlignment:(long long)arg2 ;
-(void)_action:(id)arg1 changedToEnabled:(BOOL)arg2 ;
-(void)_action:(id)arg1 changedToChecked:(BOOL)arg2 ;
-(void)_action:(id)arg1 changedToBePreferred:(BOOL)arg2 ;
-(void)_action:(id)arg1 updatedImageTintColor:(id)arg2 ;
-(void)_action:(id)arg1 updatedTitleTextColor:(id)arg2 ;
-(void)_initializeStateFromUnderlyingAlertAction;
-(_UIAlertControllerActionView *)alertControllerActionView;
-(UIAlertAction *)underlyingAlertAction;
@end

