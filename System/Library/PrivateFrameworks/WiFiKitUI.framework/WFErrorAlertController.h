/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:06 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIAlertController.h>
#import <WiFiKitUI/WFNetworkView.h>

@protocol WFErrorProviderContext;
@interface WFErrorAlertController : UIAlertController <WFNetworkView> {

	id<WFErrorProviderContext> _context;

}

@property (nonatomic,retain) id<WFErrorProviderContext> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL wantsModalPresentation; 
+(id)errorAlertControllerWithContext:(id)arg1 ;
-(id<WFErrorProviderContext>)context;
-(void)setContext:(id<WFErrorProviderContext>)arg1 ;
@end

