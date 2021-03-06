/* Generated by RuntimeBrowser
   Image: /System/Library/TextInput/libTextInputCore.dylib
 */

@interface TIAssetsForInputMode : NSObject {
    NSMutableDictionary * _assetsByInputModeLevel;
    NSString * _inputMode;
}

@property (nonatomic, readonly) NSString *inputMode;

- (void)addAssetsForInputModeLevel:(id)arg1;
- (id)assetContentItemsForInputModeLevels:(id)arg1 contentType:(id)arg2;
- (id)assetsForType:(id)arg1;
- (void)dealloc;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (id)recursiveDescription;
- (void)removeAllInputModeLevels;

@end
