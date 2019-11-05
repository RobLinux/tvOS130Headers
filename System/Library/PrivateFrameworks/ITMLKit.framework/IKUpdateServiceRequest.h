/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:10 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKServiceRequest.h>
#import <ITMLKit/IKJSViewModelLinkDelegate.h>

@class IKJSViewModelLink, NSString;

@interface IKUpdateServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {

	IKJSViewModelLink* _link;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)documentDidChangeForViewModelLink:(id)arg1 ;
-(void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2 ;
-(void)onSend;
-(void)onCancel;
@end

