/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, NSDictionary, NSArray;

@interface PKPaymentInstructions : NSObject {

	NSData* _instructionsData;
	NSData* _signatureData;
	NSDictionary* _instructionsDictionary;

}

@property (nonatomic,retain) NSDictionary * instructionsDictionary;              //@synthesize instructionsDictionary=_instructionsDictionary - In the implementation block
@property (nonatomic,readonly) NSData * instructionsData;                        //@synthesize instructionsData=_instructionsData - In the implementation block
@property (nonatomic,readonly) NSData * signatureData;                           //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,readonly) NSArray * allImageKeys; 
-(id)description;
-(CGImageRef)imageForKey:(id)arg1 ;
-(NSData *)signatureData;
-(id)initWithInstructions:(id)arg1 signature:(id)arg2 ;
-(NSArray *)allImageKeys;
-(id)_imageDataForImageWithKey:(id)arg1 format:(id*)arg2 ;
-(CGDataProviderRef)_createImageDataProviderForImageKey:(id)arg1 ;
-(void)_pruneDirectoryAtURL:(id)arg1 ;
-(BOOL)archiveToDirectoryAtURL:(id)arg1 error:(id*)arg2 ;
-(NSData *)instructionsData;
-(NSDictionary *)instructionsDictionary;
-(void)setInstructionsDictionary:(NSDictionary *)arg1 ;
@end

