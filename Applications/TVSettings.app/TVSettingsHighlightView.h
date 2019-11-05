/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:25 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettings/TVSettings-Structs.h>
#import <UIKitCore/UIView.h>

@interface TVSettingsHighlightView : UIView {

	BOOL _isAnimating;
	double _highlightProgress;

}

@property (assign,nonatomic) double highlightProgress;              //@synthesize highlightProgress=_highlightProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlightProgress:(double)arg1 ;
-(double)highlightProgress;
-(void)_setHighlightProgress:(double)arg1 ;
@end

