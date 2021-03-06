/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/PFCloudKitBaseMetric.h>

@class NSNumber;

@interface PFCloudKitSizeMetric : PFCloudKitBaseMetric {

	NSNumber* _sizeInBytes;

}

@property (nonatomic,readonly) NSNumber * sizeInBytes;              //@synthesize sizeInBytes=_sizeInBytes - In the implementation block
-(void)dealloc;
-(id)payload;
-(id)initWithContainerIdentifier:(id)arg1 ;
-(void)addByteSize:(unsigned long long)arg1 ;
-(NSNumber *)sizeInBytes;
@end

