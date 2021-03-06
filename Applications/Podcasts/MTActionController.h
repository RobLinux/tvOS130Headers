/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:22 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMUIUtil/IMActionController.h>

@class MTColorTheme;

@interface MTActionController : IMActionController {

	MTColorTheme* _colorTheme;

}

@property (nonatomic,retain) MTColorTheme * colorTheme;              //@synthesize colorTheme=_colorTheme - In the implementation block
-(void)setColorTheme:(MTColorTheme *)arg1 ;
-(MTColorTheme *)colorTheme;
-(void)setAvailableActions:(id)arg1 ;
-(void)setupActions;
-(id)createMoreAction;
@end

