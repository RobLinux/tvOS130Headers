/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:09 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATMessageLinkListenerDelegate;
@interface ATMessageLinkListener : NSObject {

	id<ATMessageLinkListenerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATMessageLinkListenerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ATMessageLinkListenerDelegate>)delegate;
-(void)setDelegate:(id<ATMessageLinkListenerDelegate>)arg1 ;
-(BOOL)start;
-(void)stop;
@end
