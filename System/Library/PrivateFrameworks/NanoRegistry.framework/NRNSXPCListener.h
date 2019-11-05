/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:48 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <NanoRegistry/NSXPCListenerDelegate.h>
#import <NanoRegistry/NRNSXPCListenerProtocol.h>

@protocol NRNSXPCListenerDelegate;
@class NSString;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol> {

	id<NRNSXPCListenerDelegate> _listenerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate; 
-(void)setDelegate:(id<NRNSXPCListenerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

