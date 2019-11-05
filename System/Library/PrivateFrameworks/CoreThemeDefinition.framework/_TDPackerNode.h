/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@interface _TDPackerNode : NSObject {

	BOOL _used;
	BOOL _fit;
	_TDPackerNode* _down;
	_TDPackerNode* _right;
	void* _node;
	CGSize _size;
	CGPoint _origin;

}

@property (assign,nonatomic) BOOL used;                          //@synthesize used=_used - In the implementation block
@property (nonatomic,retain) _TDPackerNode * down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,retain) _TDPackerNode * right;              //@synthesize right=_right - In the implementation block
@property (assign,nonatomic) BOOL fit;                           //@synthesize fit=_fit - In the implementation block
@property (assign,nonatomic) CGSize size;                        //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) CGPoint origin;                     //@synthesize origin=_origin - In the implementation block
@property (assign,nonatomic) void* node;                         //@synthesize node=_node - In the implementation block
-(void)dealloc;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void*)node;
-(BOOL)used;
-(void)setUsed:(BOOL)arg1 ;
-(_TDPackerNode *)right;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)arg1 ;
-(void)setRight:(_TDPackerNode *)arg1 ;
-(void)setNode:(void*)arg1 ;
-(_TDPackerNode *)down;
-(void)setDown:(_TDPackerNode *)arg1 ;
-(BOOL)fit;
-(void)setFit:(BOOL)arg1 ;
@end

