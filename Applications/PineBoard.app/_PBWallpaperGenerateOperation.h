/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:28 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/_PBImageProcessingOperation.h>

@interface _PBWallpaperGenerateOperation : _PBImageProcessingOperation {

	/*^block*/id _generationBlock;

}

@property (nonatomic,copy,readonly) id generationBlock;              //@synthesize generationBlock=_generationBlock - In the implementation block
-(void)cancel;
-(void)main;
-(id)initWithGenerationBlock:(/*^block*/id)arg1 ;
-(id)generationBlock;
@end

