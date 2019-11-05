/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <CoreFollowUp/FLExtensionHostContextInterface.h>

@protocol FLExtensionHostContextInterface;
@class NSString;

@interface FLExtensionHostContext : NSExtensionContext <FLExtensionHostContextInterface> {

	id<FLExtensionHostContextInterface> _delegate;

}

@property (assign,nonatomic,__weak) id<FLExtensionHostContextInterface> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
-(id<FLExtensionHostContextInterface>)delegate;
-(void)setDelegate:(id<FLExtensionHostContextInterface>)arg1 ;
-(void)extensionDidFinish;
-(id)remoteContextWithErrorHandler:(/*^block*/id)arg1 ;
@end

