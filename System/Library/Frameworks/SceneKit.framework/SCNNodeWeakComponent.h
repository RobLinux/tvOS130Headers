/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNNodeComponent;

@interface SCNNodeWeakComponent : NSObject {

	long long type;
	id component;
	SCNNodeComponent* next;

}

@property (assign,nonatomic) long long type; 
@property (assign,nonatomic,__weak) id component; 
@property (nonatomic,retain) SCNNodeComponent * next; 
-(long long)type;
-(void)setType:(long long)arg1 ;
-(SCNNodeComponent *)next;
-(void)setNext:(SCNNodeComponent *)arg1 ;
-(id)component;
-(void)setComponent:(id)arg1 ;
-(id)initWithType:(long long)arg1 component:(id)arg2 ;
@end

