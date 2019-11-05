/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>
#import <PhotosUICore/PXVideoOverlayButton.h>

@interface PXFlatVideoOverlayButton : UIButton <PXVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;
	BOOL _showAsPause;
	BOOL __didConfigureForPause;

}

@property (assign,setter=_setDidConfigureForPause:,nonatomic) BOOL _didConfigureForPause;              //@synthesize _didConfigureForPause=__didConfigureForPause - In the implementation block
@property (assign,nonatomic) BOOL showAsPause;                                                         //@synthesize showAsPause=_showAsPause - In the implementation block
-(long long)style;
-(id)initWithStyle:(long long)arg1 ;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_handleTap:(id)arg1 ;
-(BOOL)showAsPause;
-(void)setShowAsPause:(BOOL)arg1 ;
-(BOOL)_didConfigureForPause;
-(void)_setDidConfigureForPause:(BOOL)arg1 ;
@end
