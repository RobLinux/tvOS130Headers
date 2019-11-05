/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InstallCoordination/IXOpaqueDataPromise.h>
#import <InstallCoordination/NSSecureCoding.h>

@class IXPromisedOutOfBandTransferSeed;

@interface IXPromisedOutOfBandTransfer : IXOpaqueDataPromise <NSSecureCoding>

@property (nonatomic,retain) IXPromisedOutOfBandTransferSeed * seed; 
@property (assign,getter=isComplete,nonatomic) BOOL complete; 
@property (assign,nonatomic) double percentComplete; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeed:(id)arg1 ;
-(id)initWithName:(id)arg1 client:(unsigned long long)arg2 diskSpaceNeeded:(unsigned long long)arg3 ;
-(Class)seedClass;
@end

