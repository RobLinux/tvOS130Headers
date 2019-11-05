/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIScreen;

@interface UIKBScreenTraits : NSObject {

	BOOL _knobInput;
	BOOL _touchInput;
	BOOL _touchpadInput;
	BOOL _isKeyboardMinorEdgeWidth;
	UIScreen* _screen;
	long long _orientation;
	double _keyboardWidth;
	double _keyboardBarHeight;
	CGRect _bounds;

}

@property (nonatomic,readonly) UIScreen * screen;                          //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) long long idiom; 
@property (nonatomic,readonly) BOOL knobInput;                             //@synthesize knobInput=_knobInput - In the implementation block
@property (nonatomic,readonly) BOOL touchInput;                            //@synthesize touchInput=_touchInput - In the implementation block
@property (nonatomic,readonly) BOOL touchpadInput;                         //@synthesize touchpadInput=_touchpadInput - In the implementation block
@property (assign,nonatomic) long long orientation;                        //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) double keyboardWidth;                         //@synthesize keyboardWidth=_keyboardWidth - In the implementation block
@property (assign,nonatomic) CGRect bounds;                                //@synthesize bounds=_bounds - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardMinorEdgeWidth;              //@synthesize isKeyboardMinorEdgeWidth=_isKeyboardMinorEdgeWidth - In the implementation block
@property (assign,nonatomic) double keyboardBarHeight;                     //@synthesize keyboardBarHeight=_keyboardBarHeight - In the implementation block
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
+(id)fullScreenTraitsWithScreen:(id)arg1 orientation:(long long)arg2 ;
+(id)traitsWithScreen:(id)arg1 orientation:(long long)arg2 ignoreRemoteKeyboard:(BOOL)arg3 ;
-(id)description;
-(long long)orientation;
-(CGRect)bounds;
-(void)setOrientation:(long long)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(UIScreen *)screen;
-(long long)idiom;
-(double)keyboardWidth;
-(BOOL)isKeyboardMinorEdgeWidth;
-(BOOL)touchInput;
-(BOOL)knobInput;
-(BOOL)touchpadInput;
-(double)keyboardBarHeight;
-(void)updateForTextInputTraits:(id)arg1 supportedInteractionModel:(unsigned long long)arg2 ;
-(void)setKeyboardBarHeight:(double)arg1 ;
-(id)initWithScreen:(id)arg1 orientation:(long long)arg2 allowFloating:(BOOL)arg3 ignoreRemoteKeyboard:(BOOL)arg4 ;
-(void)setKeyboardWidth:(double)arg1 ;
@end

