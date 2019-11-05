/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRC/CoreRC-Structs.h>
#import <CoreRC/CECInterfaceDelegate.h>

@class CECInterface, NSMutableSet, NSDictionary, NSString;

@interface CECRouter : NSObject <CECInterfaceDelegate> {

	CECInterface* _sinkInterface;
	NSMutableSet* _interfaces;
	NSDictionary* _properties;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)routerWithSinkInterface:(id)arg1 ;
-(void)dealloc;
-(id)properties;
-(BOOL)interface:(id)arg1 sendFrame:(CECFrame)arg2 withRetryCount:(unsigned char)arg3 error:(id*)arg4 ;
-(void)interfacePropertiesChanged:(id)arg1 ;
-(BOOL)interface:(id)arg1 setAddressMask:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)interface:(id)arg1 setPromiscMode:(BOOL)arg2 error:(id*)arg3 ;
-(void)interface:(id)arg1 receivedFrame:(CECFrame)arg2 ;
-(void)interface:(id)arg1 hibernationChanged:(BOOL)arg2 ;
-(id)initWithSinkInterface:(id)arg1 ;
-(id)newRouterInterface;
@end

