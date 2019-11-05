/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>
#import <ActionKit/WFActionEventObserver.h>

@class WFAction, WFUberProduct, NSString;

@interface WFUberSeatCountPickerParameter : WFEnumerationParameter <WFActionEventObserver> {

	WFAction* _action;
	WFUberProduct* _product;

}

@property (nonatomic,retain) WFAction * action;                     //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) WFUberProduct * product;               //@synthesize product=_product - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFAction *)action;
-(void)setAction:(WFAction *)arg1 ;
-(BOOL)isHidden;
-(WFUberProduct *)product;
-(void)setProduct:(WFUberProduct *)arg1 ;
-(void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2 ;
-(void)updateProduct;
@end

