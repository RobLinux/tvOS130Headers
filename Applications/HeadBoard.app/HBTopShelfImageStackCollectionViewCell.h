/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HeadBoard-Structs.h>
#import <HeadBoard/HBImageStackCollectionViewCell.h>

@interface HBTopShelfImageStackCollectionViewCell : HBImageStackCollectionViewCell {

	double _stashedRadiosityAmount;
	BOOL _wantIdleModeBehavior;
	double _idleModeOffsetSize;
	/*^block*/id _userInterfaceStyleChangedUpdateBlock;

}

@property (assign,nonatomic) BOOL wantIdleModeBehavior;                          //@synthesize wantIdleModeBehavior=_wantIdleModeBehavior - In the implementation block
@property (assign,nonatomic) double idleModeOffsetSize;                          //@synthesize idleModeOffsetSize=_idleModeOffsetSize - In the implementation block
@property (nonatomic,copy) id userInterfaceStyleChangedUpdateBlock;              //@synthesize userInterfaceStyleChangedUpdateBlock=_userInterfaceStyleChangedUpdateBlock - In the implementation block
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_enterIdleMode;
-(void)_exitIdleMode;
-(void)setUserInterfaceStyleChangedUpdateBlock:(id)arg1 ;
-(void)setIdleModeOffsetSize:(double)arg1 ;
-(void)_updateWithCurrentUserInterfaceStyle;
-(id)userInterfaceStyleChangedUpdateBlock;
-(double)idleModeOffsetSize;
-(void)setWantIdleModeBehavior:(BOOL)arg1 ;
-(BOOL)wantIdleModeBehavior;
@end

