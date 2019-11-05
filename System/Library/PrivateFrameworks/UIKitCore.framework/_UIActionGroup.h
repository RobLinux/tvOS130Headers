/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:49 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIActionGroupable.h>

@class NSArray, NSString, UIImage;

@interface _UIActionGroup : NSObject <_UIActionGroupable> {

	BOOL _inlineGroup;
	NSArray* _children;
	NSString* _title;
	UIImage* _image;
	long long _style;
	long long _type;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) UIImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) long long style;                       //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * children;                      //@synthesize children=_children - In the implementation block
@property (assign,nonatomic) BOOL inlineGroup;                      //@synthesize inlineGroup=_inlineGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSArray *)children;
-(void)setChildren:(NSArray *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(id)_initWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 children:(id)arg4 ;
-(BOOL)inlineGroup;
-(void)setInlineGroup:(BOOL)arg1 ;
-(id)_apiRepresentation;
@end

