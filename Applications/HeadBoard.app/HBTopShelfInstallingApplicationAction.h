/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HBTopShelfAction.h>

@class NSProgress, HBTopShelfInstallApplicationAction;

@interface HBTopShelfInstallingApplicationAction : HBTopShelfAction {

	NSProgress* _installApplicationProgress;
	HBTopShelfInstallApplicationAction* _installApplicationAction;

}

@property (nonatomic,retain) HBTopShelfInstallApplicationAction * installApplicationAction;              //@synthesize installApplicationAction=_installApplicationAction - In the implementation block
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(HBTopShelfInstallApplicationAction *)installApplicationAction;
-(void)setInstallApplicationAction:(HBTopShelfInstallApplicationAction *)arg1 ;
-(id)installApplicationProgress;
-(void)updateInstallApplicationPercentage:(double)arg1 ;
-(id)initWithInstallApplicationAction:(id)arg1 ;
@end

